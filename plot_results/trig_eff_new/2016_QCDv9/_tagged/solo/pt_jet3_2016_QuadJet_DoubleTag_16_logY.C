#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16/pt_jet3_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16", "pt_jet3_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->Range(-100,-0.6558613,566.6667,2.892452);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet3__293 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet3__293","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(5,71);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(6,182);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(7,150);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(8,104);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(9,70);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(10,44);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(11,28);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(12,18);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(13,15);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(14,7);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(15,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(16,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(17,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(18,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(19,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(20,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(22,2);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetBinContent(24,1);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetEntries(701);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 701    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  72.76");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.54");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet3__293);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_pt_jet3__293->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__293->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16);
}
