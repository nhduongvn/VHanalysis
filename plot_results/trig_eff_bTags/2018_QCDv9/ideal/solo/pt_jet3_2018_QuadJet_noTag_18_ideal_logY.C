#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_ideal/pt_jet3_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_ideal", "pt_jet3_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal->Range(-100,-0.4607236,566.6667,1.136213);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet3__59 = new TH1D("_QuadJet_noTag_ideal_pt_jet3__59","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet3__59->SetBinContent(6,5);
   _QuadJet_noTag_ideal_pt_jet3__59->SetBinContent(9,1);
   _QuadJet_noTag_ideal_pt_jet3__59->SetBinContent(11,1);
   _QuadJet_noTag_ideal_pt_jet3__59->SetBinContent(12,1);
   _QuadJet_noTag_ideal_pt_jet3__59->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  72.53");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.22");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet3__59->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet3__59);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet3__59->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet3__59->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet3__59->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet3__59->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__59->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__59->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__59->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet3__59->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__59->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__59->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__59->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__59->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__59->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_noTag_18_ideal);
}
