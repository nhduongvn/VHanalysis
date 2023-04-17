#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016v2_trigEff_16()
{
//=========Macro generated from canvas: pt_jet3_2016v2_trigEff_16/pt_jet3_2016v2_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016v2_trigEff_16 = new TCanvas("pt_jet3_2016v2_trigEff_16", "pt_jet3_2016v2_trigEff_16",0,0,600,600);
   pt_jet3_2016v2_trigEff_16->SetHighLightColor(2);
   pt_jet3_2016v2_trigEff_16->Range(-109.1764,-0.1076923,585.8166,0.7897436);
   pt_jet3_2016v2_trigEff_16->SetFillColor(0);
   pt_jet3_2016v2_trigEff_16->SetFillStyle(4000);
   pt_jet3_2016v2_trigEff_16->SetBorderMode(0);
   pt_jet3_2016v2_trigEff_16->SetBorderSize(2);
   pt_jet3_2016v2_trigEff_16->SetLeftMargin(0.15709);
   pt_jet3_2016v2_trigEff_16->SetRightMargin(0.1234783);
   pt_jet3_2016v2_trigEff_16->SetBottomMargin(0.12);
   pt_jet3_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet3_2016v2_trigEff_16->SetFrameBorderMode(0);
   pt_jet3_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet3_2016v2_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v2_trigEff_pt_jet3__14 = new TH1D("v2_trigEff_pt_jet3__14","",50,0,500);
   v2_trigEff_pt_jet3__14->SetBinContent(5,0.0298519);
   v2_trigEff_pt_jet3__14->SetBinContent(6,0.04892267);
   v2_trigEff_pt_jet3__14->SetBinContent(7,0.08721721);
   v2_trigEff_pt_jet3__14->SetBinContent(8,0.1307204);
   v2_trigEff_pt_jet3__14->SetBinContent(9,0.1705696);
   v2_trigEff_pt_jet3__14->SetBinContent(10,0.1893179);
   v2_trigEff_pt_jet3__14->SetBinContent(11,0.2055503);
   v2_trigEff_pt_jet3__14->SetBinContent(12,0.2181074);
   v2_trigEff_pt_jet3__14->SetBinContent(13,0.2263272);
   v2_trigEff_pt_jet3__14->SetBinContent(14,0.2429568);
   v2_trigEff_pt_jet3__14->SetBinContent(15,0.2257177);
   v2_trigEff_pt_jet3__14->SetBinContent(16,0.2303241);
   v2_trigEff_pt_jet3__14->SetBinContent(17,0.2493461);
   v2_trigEff_pt_jet3__14->SetBinContent(18,0.2798408);
   v2_trigEff_pt_jet3__14->SetBinContent(19,0.2428331);
   v2_trigEff_pt_jet3__14->SetBinContent(20,0.2584856);
   v2_trigEff_pt_jet3__14->SetBinContent(21,0.2465753);
   v2_trigEff_pt_jet3__14->SetBinContent(22,0.2769231);
   v2_trigEff_pt_jet3__14->SetBinContent(23,0.3116883);
   v2_trigEff_pt_jet3__14->SetBinContent(24,0.2521739);
   v2_trigEff_pt_jet3__14->SetBinContent(25,0.2933333);
   v2_trigEff_pt_jet3__14->SetBinContent(26,0.3050847);
   v2_trigEff_pt_jet3__14->SetBinContent(27,0.3809524);
   v2_trigEff_pt_jet3__14->SetBinContent(28,0.15);
   v2_trigEff_pt_jet3__14->SetBinContent(29,0.25);
   v2_trigEff_pt_jet3__14->SetBinContent(30,0.2916667);
   v2_trigEff_pt_jet3__14->SetBinContent(31,0.3571429);
   v2_trigEff_pt_jet3__14->SetBinContent(32,0.4615385);
   v2_trigEff_pt_jet3__14->SetBinContent(33,0.3333333);
   v2_trigEff_pt_jet3__14->SetBinContent(35,0.25);
   v2_trigEff_pt_jet3__14->SetBinContent(36,0.1666667);
   v2_trigEff_pt_jet3__14->SetBinContent(37,0.6666667);
   v2_trigEff_pt_jet3__14->SetBinContent(38,0.4);
   v2_trigEff_pt_jet3__14->SetBinContent(50,0.5);
   v2_trigEff_pt_jet3__14->SetBinContent(51,0.6666667);
   v2_trigEff_pt_jet3__14->SetEntries(8.929835);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v2_trigEff_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  252.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    106");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v2_trigEff_pt_jet3__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v2_trigEff_pt_jet3__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v2_trigEff_pt_jet3__14->SetLineColor(ci);
   v2_trigEff_pt_jet3__14->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   v2_trigEff_pt_jet3__14->GetXaxis()->SetRange(1,500);
   v2_trigEff_pt_jet3__14->GetXaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet3__14->GetXaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet3__14->GetXaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet3__14->GetYaxis()->SetTitle("Efficiency");
   v2_trigEff_pt_jet3__14->GetYaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet3__14->GetYaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet3__14->GetZaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet3__14->GetZaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet3__14->GetZaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet3__14->Draw("HIST");
   pt_jet3_2016v2_trigEff_16->Modified();
   pt_jet3_2016v2_trigEff_16->cd();
   pt_jet3_2016v2_trigEff_16->SetSelected(pt_jet3_2016v2_trigEff_16);
}
