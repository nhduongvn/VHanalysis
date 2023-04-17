#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_trigEff_17()
{
//=========Macro generated from canvas: pt_jet0_2017_trigEff_17/pt_jet0_2017_trigEff_17
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_trigEff_17 = new TCanvas("pt_jet0_2017_trigEff_17", "pt_jet0_2017_trigEff_17",0,0,600,600);
   pt_jet0_2017_trigEff_17->SetHighLightColor(2);
   pt_jet0_2017_trigEff_17->Range(-109.1764,-0.01035264,585.8166,0.07591935);
   pt_jet0_2017_trigEff_17->SetFillColor(0);
   pt_jet0_2017_trigEff_17->SetFillStyle(4000);
   pt_jet0_2017_trigEff_17->SetBorderMode(0);
   pt_jet0_2017_trigEff_17->SetBorderSize(2);
   pt_jet0_2017_trigEff_17->SetLeftMargin(0.15709);
   pt_jet0_2017_trigEff_17->SetRightMargin(0.1234783);
   pt_jet0_2017_trigEff_17->SetBottomMargin(0.12);
   pt_jet0_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet0_2017_trigEff_17->SetFrameBorderMode(0);
   pt_jet0_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet0_2017_trigEff_17->SetFrameBorderMode(0);
   
   TH1D *_trigEff_pt_jet0__3 = new TH1D("_trigEff_pt_jet0__3","",50,0,500);
   _trigEff_pt_jet0__3->SetBinContent(7,0.0005964659);
   _trigEff_pt_jet0__3->SetBinContent(8,0.002096659);
   _trigEff_pt_jet0__3->SetBinContent(9,0.006009351);
   _trigEff_pt_jet0__3->SetBinContent(10,0.01241362);
   _trigEff_pt_jet0__3->SetBinContent(11,0.01842014);
   _trigEff_pt_jet0__3->SetBinContent(12,0.02358812);
   _trigEff_pt_jet0__3->SetBinContent(13,0.02853789);
   _trigEff_pt_jet0__3->SetBinContent(14,0.0334886);
   _trigEff_pt_jet0__3->SetBinContent(15,0.03471871);
   _trigEff_pt_jet0__3->SetBinContent(16,0.03733891);
   _trigEff_pt_jet0__3->SetBinContent(17,0.0385683);
   _trigEff_pt_jet0__3->SetBinContent(18,0.03943221);
   _trigEff_pt_jet0__3->SetBinContent(19,0.03658569);
   _trigEff_pt_jet0__3->SetBinContent(20,0.03984076);
   _trigEff_pt_jet0__3->SetBinContent(21,0.04161988);
   _trigEff_pt_jet0__3->SetBinContent(22,0.04102849);
   _trigEff_pt_jet0__3->SetBinContent(23,0.04111406);
   _trigEff_pt_jet0__3->SetBinContent(24,0.04270499);
   _trigEff_pt_jet0__3->SetBinContent(25,0.0432047);
   _trigEff_pt_jet0__3->SetBinContent(26,0.04545455);
   _trigEff_pt_jet0__3->SetBinContent(27,0.04195425);
   _trigEff_pt_jet0__3->SetBinContent(28,0.04269663);
   _trigEff_pt_jet0__3->SetBinContent(29,0.04757769);
   _trigEff_pt_jet0__3->SetBinContent(30,0.04632694);
   _trigEff_pt_jet0__3->SetBinContent(31,0.04681174);
   _trigEff_pt_jet0__3->SetBinContent(32,0.04498318);
   _trigEff_pt_jet0__3->SetBinContent(33,0.05013443);
   _trigEff_pt_jet0__3->SetBinContent(34,0.05017606);
   _trigEff_pt_jet0__3->SetBinContent(35,0.05045151);
   _trigEff_pt_jet0__3->SetBinContent(36,0.04855465);
   _trigEff_pt_jet0__3->SetBinContent(37,0.04979778);
   _trigEff_pt_jet0__3->SetBinContent(38,0.04990188);
   _trigEff_pt_jet0__3->SetBinContent(39,0.05395894);
   _trigEff_pt_jet0__3->SetBinContent(40,0.05187835);
   _trigEff_pt_jet0__3->SetBinContent(41,0.05141287);
   _trigEff_pt_jet0__3->SetBinContent(42,0.05569837);
   _trigEff_pt_jet0__3->SetBinContent(43,0.0507177);
   _trigEff_pt_jet0__3->SetBinContent(44,0.05294435);
   _trigEff_pt_jet0__3->SetBinContent(45,0.06408776);
   _trigEff_pt_jet0__3->SetBinContent(46,0.04817708);
   _trigEff_pt_jet0__3->SetBinContent(47,0.06345733);
   _trigEff_pt_jet0__3->SetBinContent(48,0.0621118);
   _trigEff_pt_jet0__3->SetBinContent(49,0.0455312);
   _trigEff_pt_jet0__3->SetBinContent(50,0.05795768);
   _trigEff_pt_jet0__3->SetBinContent(51,0.05831478);
   _trigEff_pt_jet0__3->SetEntries(1.834062);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_trigEff_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  319.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  113.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_pt_jet0__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_pt_jet0__3);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_pt_jet0__3->SetLineColor(ci);
   _trigEff_pt_jet0__3->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _trigEff_pt_jet0__3->GetXaxis()->SetRange(1,500);
   _trigEff_pt_jet0__3->GetXaxis()->SetLabelFont(42);
   _trigEff_pt_jet0__3->GetXaxis()->SetTitleOffset(1);
   _trigEff_pt_jet0__3->GetXaxis()->SetTitleFont(42);
   _trigEff_pt_jet0__3->GetYaxis()->SetTitle("Efficiency");
   _trigEff_pt_jet0__3->GetYaxis()->SetLabelFont(42);
   _trigEff_pt_jet0__3->GetYaxis()->SetTitleFont(42);
   _trigEff_pt_jet0__3->GetZaxis()->SetLabelFont(42);
   _trigEff_pt_jet0__3->GetZaxis()->SetTitleOffset(1);
   _trigEff_pt_jet0__3->GetZaxis()->SetTitleFont(42);
   _trigEff_pt_jet0__3->Draw("HIST");
   pt_jet0_2017_trigEff_17->Modified();
   pt_jet0_2017_trigEff_17->cd();
   pt_jet0_2017_trigEff_17->SetSelected(pt_jet0_2017_trigEff_17);
}
