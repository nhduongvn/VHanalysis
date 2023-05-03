#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ideal/pt_jet0_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ideal", "pt_jet0_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal->Range(-109.1764,-0.04038462,585.8166,0.2961538);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0__4 = new TH1D("_QuadJet_noTag_ideal_pt_jet0__4","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(11,0.01639344);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(18,0.01010101);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(22,0.01428571);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(23,0.01785714);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(25,0.02380952);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(27,0.02040816);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(34,0.04545455);
   _QuadJet_noTag_ideal_pt_jet0__4->SetBinContent(46,0.25);
   _QuadJet_noTag_ideal_pt_jet0__4->SetEntries(0.3983095);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  378.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  108.4");
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
   pt_jet0_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ideal);
}
