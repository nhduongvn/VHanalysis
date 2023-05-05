#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16_ideal/pt_jet1_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16_ideal", "pt_jet1_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.6145297,566.6667,2.520468);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__8 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__8","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(6,10);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(7,32);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(8,52);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(9,85);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(10,76);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(11,74);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(12,80);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(13,68);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(14,43);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(15,42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(16,43);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(17,25);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(18,24);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(19,21);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(20,29);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(21,24);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(22,21);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(23,14);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(24,8);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(25,11);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(26,10);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(27,6);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(28,6);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(29,6);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(30,7);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(31,3);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(32,3);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(34,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(36,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(43,4);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(51,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetEntries(842);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 842    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  140.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  65.46");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__8);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16_ideal);
}
