#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_ideal/pt_jet1_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_ideal", "pt_jet1_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.611913,566.6667,2.496917);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet1__11 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet1__11","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(10,61);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(11,73);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(12,81);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(13,71);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(14,45);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(15,42);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(16,46);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(17,25);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(18,25);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(19,22);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(20,31);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(21,24);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(22,22);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(23,17);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(24,8);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(25,11);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(26,11);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(27,7);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(28,6);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(29,6);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(30,7);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(31,3);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(32,3);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(34,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(35,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(36,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(37,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(38,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(41,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(42,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(43,4);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(45,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetBinContent(51,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetEntries(666);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 666    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  159.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  63.13");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet1__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet1__11->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__11->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_ideal);
}
