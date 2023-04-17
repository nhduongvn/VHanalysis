#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016v1_trigEff_16()
{
//=========Macro generated from canvas: pt_jet2_2016v1_trigEff_16/pt_jet2_2016v1_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016v1_trigEff_16 = new TCanvas("pt_jet2_2016v1_trigEff_16", "pt_jet2_2016v1_trigEff_16",0,0,600,600);
   pt_jet2_2016v1_trigEff_16->SetHighLightColor(2);
   pt_jet2_2016v1_trigEff_16->Range(-109.1764,-0.06253102,585.8166,0.4585608);
   pt_jet2_2016v1_trigEff_16->SetFillColor(0);
   pt_jet2_2016v1_trigEff_16->SetFillStyle(4000);
   pt_jet2_2016v1_trigEff_16->SetBorderMode(0);
   pt_jet2_2016v1_trigEff_16->SetBorderSize(2);
   pt_jet2_2016v1_trigEff_16->SetLeftMargin(0.15709);
   pt_jet2_2016v1_trigEff_16->SetRightMargin(0.1234783);
   pt_jet2_2016v1_trigEff_16->SetBottomMargin(0.12);
   pt_jet2_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet2_2016v1_trigEff_16->SetFrameBorderMode(0);
   pt_jet2_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet2_2016v1_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v1_trigEff_pt_jet2__9 = new TH1D("v1_trigEff_pt_jet2__9","",50,0,500);
   v1_trigEff_pt_jet2__9->SetBinContent(5,0.02005786);
   v1_trigEff_pt_jet2__9->SetBinContent(6,0.04558661);
   v1_trigEff_pt_jet2__9->SetBinContent(7,0.07960192);
   v1_trigEff_pt_jet2__9->SetBinContent(8,0.1037241);
   v1_trigEff_pt_jet2__9->SetBinContent(9,0.1218928);
   v1_trigEff_pt_jet2__9->SetBinContent(10,0.1358637);
   v1_trigEff_pt_jet2__9->SetBinContent(11,0.1444611);
   v1_trigEff_pt_jet2__9->SetBinContent(12,0.1522769);
   v1_trigEff_pt_jet2__9->SetBinContent(13,0.1640757);
   v1_trigEff_pt_jet2__9->SetBinContent(14,0.1674487);
   v1_trigEff_pt_jet2__9->SetBinContent(15,0.1765078);
   v1_trigEff_pt_jet2__9->SetBinContent(16,0.1717662);
   v1_trigEff_pt_jet2__9->SetBinContent(17,0.1812582);
   v1_trigEff_pt_jet2__9->SetBinContent(18,0.1772885);
   v1_trigEff_pt_jet2__9->SetBinContent(19,0.1921247);
   v1_trigEff_pt_jet2__9->SetBinContent(20,0.207476);
   v1_trigEff_pt_jet2__9->SetBinContent(21,0.1935053);
   v1_trigEff_pt_jet2__9->SetBinContent(22,0.179096);
   v1_trigEff_pt_jet2__9->SetBinContent(23,0.2043906);
   v1_trigEff_pt_jet2__9->SetBinContent(24,0.204918);
   v1_trigEff_pt_jet2__9->SetBinContent(25,0.1960094);
   v1_trigEff_pt_jet2__9->SetBinContent(26,0.2231544);
   v1_trigEff_pt_jet2__9->SetBinContent(27,0.2161172);
   v1_trigEff_pt_jet2__9->SetBinContent(28,0.2095032);
   v1_trigEff_pt_jet2__9->SetBinContent(29,0.1698113);
   v1_trigEff_pt_jet2__9->SetBinContent(30,0.2076125);
   v1_trigEff_pt_jet2__9->SetBinContent(31,0.2133891);
   v1_trigEff_pt_jet2__9->SetBinContent(32,0.2916667);
   v1_trigEff_pt_jet2__9->SetBinContent(33,0.2272727);
   v1_trigEff_pt_jet2__9->SetBinContent(34,0.2293578);
   v1_trigEff_pt_jet2__9->SetBinContent(35,0.2095238);
   v1_trigEff_pt_jet2__9->SetBinContent(36,0.1684211);
   v1_trigEff_pt_jet2__9->SetBinContent(37,0.25);
   v1_trigEff_pt_jet2__9->SetBinContent(38,0.1884058);
   v1_trigEff_pt_jet2__9->SetBinContent(39,0.25);
   v1_trigEff_pt_jet2__9->SetBinContent(40,0.225);
   v1_trigEff_pt_jet2__9->SetBinContent(41,0.2);
   v1_trigEff_pt_jet2__9->SetBinContent(42,0.25);
   v1_trigEff_pt_jet2__9->SetBinContent(43,0.3870968);
   v1_trigEff_pt_jet2__9->SetBinContent(44,0.24);
   v1_trigEff_pt_jet2__9->SetBinContent(45,0.2727273);
   v1_trigEff_pt_jet2__9->SetBinContent(46,0.2916667);
   v1_trigEff_pt_jet2__9->SetBinContent(47,0.07142857);
   v1_trigEff_pt_jet2__9->SetBinContent(48,0.2);
   v1_trigEff_pt_jet2__9->SetBinContent(49,0.2857143);
   v1_trigEff_pt_jet2__9->SetBinContent(50,0.2222222);
   v1_trigEff_pt_jet2__9->SetBinContent(51,0.25);
   v1_trigEff_pt_jet2__9->SetEntries(8.919422);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v1_trigEff_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  300.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  122.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v1_trigEff_pt_jet2__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v1_trigEff_pt_jet2__9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v1_trigEff_pt_jet2__9->SetLineColor(ci);
   v1_trigEff_pt_jet2__9->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   v1_trigEff_pt_jet2__9->GetXaxis()->SetRange(1,500);
   v1_trigEff_pt_jet2__9->GetXaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet2__9->GetXaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet2__9->GetXaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet2__9->GetYaxis()->SetTitle("Efficiency");
   v1_trigEff_pt_jet2__9->GetYaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet2__9->GetYaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet2__9->GetZaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet2__9->GetZaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet2__9->GetZaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet2__9->Draw("HIST");
   pt_jet2_2016v1_trigEff_16->Modified();
   pt_jet2_2016v1_trigEff_16->cd();
   pt_jet2_2016v1_trigEff_16->SetSelected(pt_jet2_2016v1_trigEff_16);
}
