#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_2b2c_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_2b2c/CvB_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("CvB_2018_QuadJet_TripleTag_18_2b2c", "CvB_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_2b2c->Range(-0.2,2.778456,1.133333,4.615223);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvB__80 = new TH1D("_QuadJet_TripleTag_2b2c_CvB__80","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(1,14256);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(2,2199);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(3,1833);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(4,2352);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(5,3038);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(6,3423);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(7,4692);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(8,6310);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(9,9059);
   _QuadJet_TripleTag_2b2c_CvB__80->SetBinContent(10,5066);
   _QuadJet_TripleTag_2b2c_CvB__80->SetEntries(52228);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 52228  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4855");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3493");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvB__80->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvB__80);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvB__80->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvB__80->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_2b2c_CvB__80->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvB__80->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__80->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__80->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__80->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvB__80->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__80->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__80->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__80->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__80->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__80->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_2b2c->Modified();
   CvB_2018_QuadJet_TripleTag_18_2b2c->cd();
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetSelected(CvB_2018_QuadJet_TripleTag_18_2b2c);
}
