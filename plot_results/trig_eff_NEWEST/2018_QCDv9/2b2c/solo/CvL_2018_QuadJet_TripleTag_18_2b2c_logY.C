#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_2b2c_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_2b2c/CvL_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("CvL_2018_QuadJet_TripleTag_18_2b2c", "CvL_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_2b2c->Range(-0.2,2.825998,1.133333,4.533322);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvL__77 = new TH1D("_QuadJet_TripleTag_2b2c_CvL__77","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(1,8092);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(2,11338);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(3,3741);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(4,2365);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(5,2071);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(6,1985);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(7,2348);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(8,3187);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(9,4938);
   _QuadJet_TripleTag_2b2c_CvL__77->SetBinContent(10,12163);
   _QuadJet_TripleTag_2b2c_CvL__77->SetEntries(52228);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 52228  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4918");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3631");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvL__77->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvL__77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvL__77->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvL__77->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_2b2c_CvL__77->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvL__77->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__77->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL__77->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__77->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvL__77->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__77->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__77->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__77->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL__77->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__77->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_2b2c->Modified();
   CvL_2018_QuadJet_TripleTag_18_2b2c->cd();
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetSelected(CvL_2018_QuadJet_TripleTag_18_2b2c);
}
