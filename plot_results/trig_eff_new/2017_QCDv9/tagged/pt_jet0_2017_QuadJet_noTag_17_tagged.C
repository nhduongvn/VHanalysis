#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_tagged/pt_jet0_2017_QuadJet_noTag_17_tagged
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_tagged", "pt_jet0_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->Range(-109.1764,-0.003473945,585.8166,0.0254756);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__58 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__58","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(8,0.0008510638);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(9,0.001863354);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(10,0.003164557);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(11,0.002883229);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(12,0.005099439);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(13,0.005626598);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(14,0.00613155);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(15,0.006524318);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(16,0.002565747);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(17,0.007315289);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(18,0.005473026);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(19,0.005479452);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(20,0.00621118);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(21,0.013382);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(22,0.005174644);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(23,0.004552352);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(24,0.007716049);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(25,0.007532957);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(26,0.00422833);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(27,0.005);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(28,0.01634877);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(29,0.002638522);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(30,0.004081633);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(31,0.007462687);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(32,0.003875969);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(33,0.01209677);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(34,0.005405405);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(36,0.006666667);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(38,0.01694915);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(39,0.0078125);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(41,0.01041667);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(42,0.02150538);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(51,0.001912046);
   _QuadJet_noTag_tagged_pt_jet0__58->SetEntries(0.2220353);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  271.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  97.74");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0__58->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0__58);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet0__58->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet0_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet0_2017_QuadJet_noTag_17_tagged);
}
