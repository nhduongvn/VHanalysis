#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17/pt_jet3_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17", "pt_jet3_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17->Range(-109.1764,-0.1076923,585.8166,0.7897436);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__301 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__301","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(5,0.06812796);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(6,0.1297505);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(7,0.1804667);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(8,0.2205602);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(9,0.2277893);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(10,0.249183);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(11,0.2618454);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(12,0.2417154);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(13,0.2795031);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(14,0.2622222);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(15,0.2721088);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(16,0.3297872);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(17,0.1803279);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(18,0.2156863);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(19,0.1428571);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(20,0.3333333);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(21,0.2222222);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(22,0.07692308);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(23,0.4444444);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(24,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetBinContent(28,0.25);
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetEntries(5.255521);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  160.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__301);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet3__301->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__301->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__301->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17->cd();
   pt_jet3_2017_QuadJet_TripleTag_17->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17);
}
