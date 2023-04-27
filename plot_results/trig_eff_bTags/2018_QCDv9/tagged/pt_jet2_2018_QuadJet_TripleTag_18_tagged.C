#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_tagged()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_tagged/pt_jet2_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_tagged = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_tagged", "pt_jet2_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFillStyle(4000);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15709);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetRightMargin(0.1234783);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetBottomMargin(0.12);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__67 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__67","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(5,0.06060606);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(6,0.2208835);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(7,0.3924051);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(8,0.5597484);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(9,0.7167235);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(10,0.7882883);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(11,0.8589744);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(12,0.826087);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(13,0.826087);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(14,0.8644068);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(15,0.9107143);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(16,0.84);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(17,0.8928571);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(18,0.9230769);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(19,0.7857143);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(20,0.7777778);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(21,0.7272727);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(22,0.9);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(23,0.7777778);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(24,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(25,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(26,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(28,0.625);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(29,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(35,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(37,1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetEntries(22.2744);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 22     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.52");
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
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_tagged);
}
