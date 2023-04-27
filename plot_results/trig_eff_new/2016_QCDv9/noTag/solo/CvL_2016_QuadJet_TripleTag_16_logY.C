#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16/CvL_2016_QuadJet_TripleTag_16
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16 = new TCanvas("CvL_2016_QuadJet_TripleTag_16", "CvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16->Range(-0.2,3.419241,1.133333,5.464495);
   CvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16->SetLogy();
   CvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL__86 = new TH1D("_QuadJet_TripleTag_CvL__86","",10,0,1);
   _QuadJet_TripleTag_CvL__86->SetBinContent(1,96033);
   _QuadJet_TripleTag_CvL__86->SetBinContent(2,41410);
   _QuadJet_TripleTag_CvL__86->SetBinContent(3,15336);
   _QuadJet_TripleTag_CvL__86->SetBinContent(4,10153);
   _QuadJet_TripleTag_CvL__86->SetBinContent(5,8410);
   _QuadJet_TripleTag_CvL__86->SetBinContent(6,8535);
   _QuadJet_TripleTag_CvL__86->SetBinContent(7,10227);
   _QuadJet_TripleTag_CvL__86->SetBinContent(8,13960);
   _QuadJet_TripleTag_CvL__86->SetBinContent(9,22009);
   _QuadJet_TripleTag_CvL__86->SetBinContent(10,47079);
   _QuadJet_TripleTag_CvL__86->SetEntries(273152);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 273152 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3974");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3651");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__86->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__86);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvL__86->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__86->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__86->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvL__86->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__86->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__86->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__86->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvL__86->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__86->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__86->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__86->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__86->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__86->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16->Modified();
   CvL_2016_QuadJet_TripleTag_16->cd();
   CvL_2016_QuadJet_TripleTag_16->SetSelected(CvL_2016_QuadJet_TripleTag_16);
}
