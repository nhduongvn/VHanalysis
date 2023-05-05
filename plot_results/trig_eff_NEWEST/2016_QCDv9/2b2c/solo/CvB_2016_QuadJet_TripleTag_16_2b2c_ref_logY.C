#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_2b2c_ref/CvB_2016_QuadJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_2b2c_ref = new TCanvas("CvB_2016_QuadJet_TripleTag_16_2b2c_ref", "CvB_2016_QuadJet_TripleTag_16_2b2c_ref",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->Range(-0.2,3.258751,1.133333,4.971184);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvB_ref__159 = new TH1D("_QuadJet_TripleTag_2b2c_CvB_ref__159","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(1,33296);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(2,6243);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(3,5383);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(4,6226);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(5,7038);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(6,8242);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(7,11346);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(8,15252);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(9,20840);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetBinContent(10,13022);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetEntries(126888);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 126888 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4854");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3469");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvB_ref__159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvB_ref__159->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB_ref__159->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->Modified();
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->cd();
   CvB_2016_QuadJet_TripleTag_16_2b2c_ref->SetSelected(CvB_2016_QuadJet_TripleTag_16_2b2c_ref);
}
