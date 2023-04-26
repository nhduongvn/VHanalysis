#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref/pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref", "pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->Range(-100,-0.863433,566.6667,4.760597);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3_ref__147 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3_ref__147","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(5,5352);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(6,8330);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(7,5567);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(8,3529);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(9,2064);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(10,1364);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(11,908);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(12,598);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(13,357);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(14,247);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(15,153);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(16,101);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(17,78);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(18,56);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(19,44);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(20,22);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(21,22);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(22,14);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(23,11);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(24,5);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(25,4);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(26,7);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(27,5);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(28,4);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(29,2);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(30,5);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(38,1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetEntries(28853);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28853  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  68.27");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.27");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3_ref__147);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3_ref__147->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_tagged_ref);
}
