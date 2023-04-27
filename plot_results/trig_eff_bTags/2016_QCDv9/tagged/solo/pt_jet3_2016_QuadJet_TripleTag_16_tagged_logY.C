#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_tagged/pt_jet3_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_tagged = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_tagged", "pt_jet3_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->Range(-100,-0.6579101,566.6667,2.910891);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__146 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__146","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(5,49);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(6,168);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(7,189);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(8,112);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(9,78);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(10,52);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(11,43);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(12,31);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(13,14);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(14,9);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(15,8);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(16,6);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(17,4);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(18,2);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(19,1);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(20,2);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(24,1);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(26,1);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetBinContent(27,2);
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetEntries(772);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 772    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.08");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  27.91");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__146);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet3__146->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__146->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__146->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_tagged->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_tagged);
}
