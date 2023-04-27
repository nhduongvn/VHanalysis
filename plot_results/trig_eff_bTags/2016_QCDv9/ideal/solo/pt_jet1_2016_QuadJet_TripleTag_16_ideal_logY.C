#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16_ideal/pt_jet1_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16_ideal", "pt_jet1_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.6125791,566.6667,2.502912);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__230 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__230","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(6,9);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(7,29);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(8,46);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(9,82);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(10,66);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(11,63);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(12,67);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(13,61);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(14,43);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(15,40);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(16,39);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(17,23);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(18,23);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(19,19);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(20,28);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(21,24);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(22,20);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(23,13);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(24,8);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(25,9);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(26,8);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(27,5);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(28,5);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(29,6);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(30,6);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(31,3);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(32,3);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(34,2);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(36,1);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(43,4);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetBinContent(51,2);
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetEntries(767);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 767    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  141.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  66.36");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1__230->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__230->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__230->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16_ideal);
}
