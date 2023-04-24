#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16/pt_jet2_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16", "pt_jet2_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->Range(-109.1764,-0.01346154,585.8166,0.09871795);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet2__268 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet2__268","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(5,0.003861004);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(6,0.01674696);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(7,0.02118725);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(8,0.02754142);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(9,0.02740105);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(10,0.024);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(11,0.03238469);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(12,0.02439024);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(13,0.03280225);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(14,0.02911392);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(15,0.02931034);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(16,0.02844639);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(17,0.04216867);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(18,0.02057613);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(19,0.02453988);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(20,0.03448276);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(21,0.01754386);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(22,0.05063291);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(25,0.05882353);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(27,0.03703704);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(28,0.03846154);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(29,0.04761905);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetBinContent(32,0.08333333);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetEntries(0.7524042);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    190");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  79.51");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet2__268);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_pt_jet2__268->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__268->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16);
}
