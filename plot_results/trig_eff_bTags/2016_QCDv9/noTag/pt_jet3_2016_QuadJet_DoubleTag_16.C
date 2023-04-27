#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16/pt_jet3_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:19:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16", "pt_jet3_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->Range(-109.1764,-0.01242604,585.8166,0.09112426);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet3__40 = new TH1D("_QuadJet_DoubleTag_pt_jet3__40","",50,0,500);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(5,0.007560182);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(6,0.01258729);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(7,0.01640812);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(8,0.01928725);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(9,0.01823459);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(10,0.01773489);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(11,0.0189693);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(12,0.01704051);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(13,0.02119013);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(14,0.02061856);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(15,0.02037948);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(16,0.01229508);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(17,0.02535658);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(18,0.02891566);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(19,0.015625);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(20,0.01554404);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(21,0.01829268);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(22,0.04385965);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(23,0.01111111);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(24,0.03333333);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(27,0.07692308);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(28,0.04347826);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(29,0.03448276);
   _QuadJet_DoubleTag_pt_jet3__40->SetEntries(0.5492275);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  185.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  72.47");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet3__40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet3__40);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_pt_jet3__40->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_pt_jet3__40->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__40->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16);
}
