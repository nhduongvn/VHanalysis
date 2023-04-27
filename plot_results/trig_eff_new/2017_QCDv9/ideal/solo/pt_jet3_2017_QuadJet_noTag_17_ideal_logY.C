#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17_ideal/pt_jet3_2017_QuadJet_noTag_17_ideal
//=========  (Wed Apr 26 16:41:51 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet3_2017_QuadJet_noTag_17_ideal", "pt_jet3_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17_ideal->Range(-100,-0.5749504,566.6667,2.164253);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetLogy();
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet3__131 = new TH1D("_QuadJet_noTag_ideal_pt_jet3__131","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(5,9);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(6,27);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(7,41);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(8,16);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(9,20);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(10,7);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(11,7);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(12,2);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(13,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(14,2);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(15,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(16,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetBinContent(19,1);
   _QuadJet_noTag_ideal_pt_jet3__131->SetEntries(135);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 135    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  73.69");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   22.9");
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
   pt_jet3_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet3_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet3_2017_QuadJet_noTag_17_ideal);
}
