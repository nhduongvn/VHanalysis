#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_tagged/pt_jet1_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_tagged", "pt_jet1_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFillStyle(4000);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetBottomMargin(0.12);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet1__61 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet1__61","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(6,0.16);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(7,0.1764706);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(8,0.3301887);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(9,0.537037);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(10,0.5775862);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(11,0.6428571);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(12,0.6111111);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(13,0.6548673);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(14,0.6615385);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(15,0.6271186);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(16,0.6333333);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(17,0.65);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(18,0.6904762);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(19,0.3478261);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(20,0.6296296);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(21,0.64);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(22,0.8235294);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(23,0.4166667);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(24,0.5333333);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(25,0.7272727);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(26,0.7777778);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(27,0.5714286);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(28,0.625);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(29,0.3333333);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(30,0.5);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(31,0.6);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(32,0.75);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(34,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(35,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(38,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(40,0.75);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(43,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(47,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(49,1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetBinContent(51,0.75);
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetEntries(23.97838);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 24     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  269.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  120.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet1__61);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet1__61->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__61->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__61->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_tagged);
}
