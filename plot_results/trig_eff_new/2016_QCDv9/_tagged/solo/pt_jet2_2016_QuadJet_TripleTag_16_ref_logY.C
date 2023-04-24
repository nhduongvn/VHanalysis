#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_ref/pt_jet2_2016_QuadJet_TripleTag_16_ref
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_ref = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_ref", "pt_jet2_2016_QuadJet_TripleTag_16_ref",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->Range(-100,-0.8382584,566.6667,4.534026);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2_ref__267 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2_ref__267","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(5,777);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(6,4359);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(7,5239);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(8,4466);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(9,3613);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(10,2625);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(11,2038);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(12,1435);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(13,1067);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(14,790);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(15,580);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(16,457);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(17,332);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(18,243);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(19,163);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(20,145);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(21,114);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(22,79);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(23,74);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(24,50);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(25,34);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(26,20);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(27,27);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(28,26);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(29,21);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(30,13);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(31,15);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(32,12);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(33,7);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(34,7);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(35,5);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(36,4);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(37,2);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(38,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(39,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(40,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(41,3);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(42,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(43,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(44,2);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(45,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetBinContent(51,2);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetEntries(28853);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28853  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  88.82");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  36.93");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2_ref__267);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__267->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_ref->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_ref->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_ref->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_ref);
}
