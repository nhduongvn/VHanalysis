#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16_tagged/pt_jet2_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet2_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->Range(-109.1764,-0.03230769,585.8166,0.2369231);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet2__142 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet2__142","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(5,0.002583979);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(6,0.004387991);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(7,0.008090927);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(8,0.01259843);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(9,0.01895206);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(10,0.03138155);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(11,0.03015324);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(12,0.03013315);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(13,0.01792453);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(14,0.02411168);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(15,0.02090592);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(16,0.03333333);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(17,0.02719033);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(18,0.004132231);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(19,0.02453988);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(20,0.02758621);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(21,0.02654867);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(22,0.04938272);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(23,0.02739726);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(24,0.02);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(29,0.1428571);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(30,0.07692308);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(33,0.1428571);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetBinContent(35,0.2);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetEntries(1.003971);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  246.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  89.22");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet2__142);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__142->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16_tagged);
}
