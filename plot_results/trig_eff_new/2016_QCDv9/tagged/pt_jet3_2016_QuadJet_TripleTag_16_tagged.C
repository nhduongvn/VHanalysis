#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_tagged/pt_jet3_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_tagged = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_tagged", "pt_jet3_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__145 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__145","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(5,0.2217212);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(6,0.3527422);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(7,0.4347826);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(8,0.494302);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(9,0.5029326);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(10,0.5162482);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(11,0.5493896);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(12,0.5721477);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(13,0.5646067);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(14,0.6275304);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(15,0.5032258);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(16,0.51);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(17,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(18,0.5357143);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(19,0.5454545);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(20,0.6818182);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(21,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(22,0.4285714);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(23,0.7272727);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(24,0.4);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(25,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(26,0.5714286);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(27,0.8);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(28,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(29,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(30,0.8);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetEntries(15.83989);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  196.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.88");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet3__145->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__145->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__145->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_tagged);
}
