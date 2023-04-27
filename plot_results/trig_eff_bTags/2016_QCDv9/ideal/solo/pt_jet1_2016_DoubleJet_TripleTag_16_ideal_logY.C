#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_ideal/pt_jet1_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_ideal", "pt_jet1_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.6016117,566.6667,2.404205);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet1__236 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet1__236","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(10,52);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(11,62);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(12,67);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(13,63);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(14,45);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(15,40);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(16,42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(17,23);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(18,24);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(19,20);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(20,30);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(21,24);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(22,21);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(23,15);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(24,8);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(25,9);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(26,9);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(27,6);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(28,5);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(29,6);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(30,6);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(31,3);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(32,3);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(34,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(35,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(36,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(37,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(38,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(41,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(42,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(43,4);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(45,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetBinContent(51,2);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetEntries(602);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 602    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  161.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  63.87");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet1__236);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet1__236->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__236->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_ideal);
}
