#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17/pt_jet1_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17 = new TCanvas("pt_jet1_2017_QuadJet_noTag_17", "pt_jet1_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17->Range(-109.1764,-0.002937063,585.8166,0.02153846);
   pt_jet1_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17->SetFillStyle(4000);
   pt_jet1_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   pt_jet1_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   pt_jet1_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet1__256 = new TH1D("_QuadJet_noTag_tagged_pt_jet1__256","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(6,0.001824818);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(7,0.0008639309);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(8,0.001681237);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(9,0.003722504);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(10,0.005729565);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(11,0.007481297);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(12,0.004504505);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(13,0.009118541);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(14,0.005124451);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(15,0.003401361);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(16,0.004056795);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(17,0.006242197);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(18,0.006535948);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(19,0.01033058);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(20,0.01411765);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(21,0.01340483);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(22,0.003246753);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(23,0.01574803);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(24,0.009433962);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(25,0.00617284);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(26,0.008333333);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(28,0.008695652);
   _QuadJet_noTag_tagged_pt_jet1__256->SetBinContent(29,0.01818182);
   _QuadJet_noTag_tagged_pt_jet1__256->SetEntries(0.1679526);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  194.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.44");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet1__256->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet1__256);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet1__256->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet1__256->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet1__256->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet1__256->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__256->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__256->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__256->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet1__256->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__256->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__256->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__256->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__256->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__256->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17->Modified();
   pt_jet1_2017_QuadJet_noTag_17->cd();
   pt_jet1_2017_QuadJet_noTag_17->SetSelected(pt_jet1_2017_QuadJet_noTag_17);
}
