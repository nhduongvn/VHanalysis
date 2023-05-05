#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref/pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref", "pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->Range(-100,-0.8689555,566.6667,4.8103);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_pt_jet3_ref__129 = new TH1D("_QuadJet_TripleTag_2b2c_pt_jet3_ref__129","",50,0,500);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(5,5909);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(6,9222);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(7,6122);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(8,3844);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(9,2273);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(10,1507);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(11,981);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(12,644);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(13,381);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(14,269);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(15,165);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(16,104);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(17,84);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(18,60);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(19,45);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(20,25);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(21,23);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(22,14);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(23,12);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(24,5);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(25,4);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(26,7);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(27,7);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(28,4);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(29,2);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(30,5);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(32,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(33,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(38,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetBinContent(46,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetEntries(31722);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 31722  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  68.08");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.04");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_pt_jet3_ref__129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__129->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_2b2c_ref);
}
