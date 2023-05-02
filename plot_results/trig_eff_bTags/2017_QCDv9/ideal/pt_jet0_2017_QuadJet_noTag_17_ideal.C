#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ideal/pt_jet0_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ideal", "pt_jet0_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.009502263,585.8166,0.06968326);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0__4 = new TH1D("_QuadJet_noTag_ideal_pt_jet0__4","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(13,0.05882353);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(14,0.05263158);
   _QuadJet_noTag_ideal_pt_jet0__4->SetEntries(0.1114551);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  129.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  4.992");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet0__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet0__4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet0__4->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet0__4->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet0__4->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet0__4->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__4->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__4->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__4->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet0__4->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__4->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__4->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__4->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__4->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__4->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ideal);
}
