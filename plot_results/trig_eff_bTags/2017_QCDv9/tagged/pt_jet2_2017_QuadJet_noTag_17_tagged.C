#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17_tagged/pt_jet2_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet2_2017_QuadJet_noTag_17_tagged", "pt_jet2_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17_tagged->Range(-109.1764,-0.02019231,585.8166,0.1480769);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet2__70 = new TH1D("_QuadJet_noTag_tagged_pt_jet2__70","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(6,0.01459854);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(7,0.004950495);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(8,0.01129944);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(10,0.01550388);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(11,0.01052632);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(13,0.03225806);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(16,0.03125);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(21,0.125);
   _QuadJet_noTag_tagged_pt_jet2__70->SetEntries(0.2453867);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  159.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  52.56");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet2__70->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet2__70);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet2__70->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet2__70->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__70->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet2_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet2_2017_QuadJet_noTag_17_tagged);
}
