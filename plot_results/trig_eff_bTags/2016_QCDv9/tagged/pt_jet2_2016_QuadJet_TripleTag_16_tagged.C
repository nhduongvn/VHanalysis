#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_tagged/pt_jet2_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_tagged = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_tagged", "pt_jet2_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__133 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__133","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(5,0.2941176);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(6,0.4712644);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(7,0.7191781);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(8,0.82);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(9,0.7886179);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(10,0.9139785);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(11,0.8863636);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(12,0.8709677);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(13,0.8);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(14,0.8235294);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(15,0.9411765);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(16,0.9090909);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(17,0.8235294);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(18,0.875);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(19,0.7142857);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(20,0.9);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(21,0.875);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(22,0.8333333);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(23,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(24,0.8);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(25,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(26,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(27,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(28,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(29,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetBinContent(35,1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetEntries(23.05943);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 23     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  188.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__133);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet2__133->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__133->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__133->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_tagged);
}
