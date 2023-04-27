#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17_tagged/pt_jet3_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet3_2017_QuadJet_noTag_17_tagged", "pt_jet3_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17_tagged->Range(-109.1764,-0.01009615,585.8166,0.07403846);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet3__76 = new TH1D("_QuadJet_noTag_tagged_pt_jet3__76","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(6,0.01529052);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(7,0.01271186);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(8,0.00617284);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(11,0.01724138);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(14,0.0625);
   _QuadJet_noTag_tagged_pt_jet3__76->SetBinContent(15,0.05555556);
   _QuadJet_noTag_tagged_pt_jet3__76->SetEntries(0.1694722);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  120.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   31.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet3__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet3__76);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet3__76->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__76->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet3__76->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__76->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__76->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet3_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet3_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet3_2017_QuadJet_noTag_17_tagged);
}
