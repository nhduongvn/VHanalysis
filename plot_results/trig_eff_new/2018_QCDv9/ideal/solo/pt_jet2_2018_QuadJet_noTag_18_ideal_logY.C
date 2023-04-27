#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18_ideal/pt_jet2_2018_QuadJet_noTag_18_ideal
//=========  (Thu Apr 27 10:18:11 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_noTag_18_ideal", "pt_jet2_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal->Range(-100,-0.578784,566.6667,2.198756);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetLogy();
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet2__125 = new TH1D("_QuadJet_noTag_ideal_pt_jet2__125","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(6,6);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(7,25);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(8,39);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(9,44);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(10,28);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(11,29);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(12,22);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(13,10);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(14,8);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(15,10);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(16,5);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(17,6);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(18,3);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(19,2);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(20,2);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(21,1);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(23,2);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(26,1);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(28,2);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(34,1);
   _QuadJet_noTag_ideal_pt_jet2__125->SetEntries(246);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 246    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  103.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.61");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet2__125->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet2__125);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet2__125->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet2__125->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__125->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet2_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet2_2018_QuadJet_noTag_18_ideal);
}
