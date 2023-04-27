#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_tagged/pt_jet2_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_tagged", "pt_jet2_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__67 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__67","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(6,0.2262774);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(7,0.4257426);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(8,0.5480226);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(9,0.6745562);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(10,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(11,0.6631579);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(12,0.6625);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(13,0.6612903);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(14,0.744186);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(15,0.5666667);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(16,0.4375);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(17,0.5555556);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(18,0.7692308);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(19,0.6);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(20,0.8181818);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(21,0.875);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(22,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(23,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(25,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(26,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(27,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(28,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(29,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(30,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(39,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetEntries(19.22787);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 19     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  208.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.33");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_tagged);
}
