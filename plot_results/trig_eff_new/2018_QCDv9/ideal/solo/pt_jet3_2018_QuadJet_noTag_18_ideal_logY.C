#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_ideal/pt_jet3_2018_QuadJet_noTag_18_ideal
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_ideal", "pt_jet3_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal->Range(-100,-0.5928367,566.6667,2.32523);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet3__131 = new TH1D("_QuadJet_noTag_ideal_pt_jet3__131","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(5,17);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(6,51);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(7,57);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(8,45);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(9,25);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(10,16);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(11,13);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(12,7);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(13,4);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(14,7);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(15,3);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(16,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(17,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(18,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(20,2);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(26,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetEntries(251);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 251    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.45");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   28.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet3__131->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet3__131);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet3__131->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet3__131->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet3__131->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet3__131->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__131->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__131->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__131->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet3__131->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__131->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__131->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__131->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__131->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__131->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_noTag_18_ideal);
}
