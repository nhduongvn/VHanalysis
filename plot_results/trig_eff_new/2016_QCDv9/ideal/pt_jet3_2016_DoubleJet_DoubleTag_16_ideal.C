#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16_ideal/pt_jet3_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet3_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet3__262 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet3__262","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(5,0.01467611);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(6,0.01983143);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(7,0.02620434);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(8,0.02443106);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(9,0.02902903);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(10,0.02880355);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(11,0.02330744);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(12,0.02013423);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(13,0.01404494);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(14,0.04048583);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(15,0.0516129);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(16,0.03);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(18,0.05357143);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(19,0.06818182);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(28,0.5);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetBinContent(30,0.2);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetEntries(1.144314);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  221.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   79.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet3__262);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__262->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16_ideal);
}
