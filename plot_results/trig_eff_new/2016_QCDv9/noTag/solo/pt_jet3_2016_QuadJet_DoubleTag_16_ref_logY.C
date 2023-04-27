#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16_ref/pt_jet3_2016_QuadJet_DoubleTag_16_ref
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16_ref = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16_ref", "pt_jet3_2016_QuadJet_DoubleTag_16_ref",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->Range(-100,-1.030982,566.6667,6.268538);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetLogy();
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet3_ref__42 = new TH1D("_QuadJet_DoubleTag_pt_jet3_ref__42","",50,0,500);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(5,152296);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(6,182405);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(7,91830);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(8,48274);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(9,26603);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(10,15179);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(11,9034);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(12,5699);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(13,3418);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(14,2215);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(15,1412);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(16,970);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(17,623);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(18,413);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(19,317);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(20,191);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(21,163);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(22,113);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(23,90);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(24,58);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(25,30);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(26,30);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(27,26);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(28,22);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(29,29);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(30,14);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(31,6);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(32,5);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(33,7);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(34,4);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(35,2);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(36,2);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(37,2);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(38,2);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(39,1);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(40,2);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(43,1);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(46,1);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetBinContent(51,1);
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetEntries(541490);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 541490 ");
   ptstats_LaTex = ptstats->AddText("Mean  =   61.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.15");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet3_ref__42);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_pt_jet3_ref__42->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3_ref__42->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3_ref__42->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16_ref->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16_ref);
}
