#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_2b2c()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_2b2c/CvL_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("CvL_2018_QuadJet_TripleTag_18_2b2c", "CvL_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_2b2c->Range(-0.2183529,0.2363876,1.171633,0.3432419);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFillStyle(4000);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetBottomMargin(0.12);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvL__76 = new TH1D("_QuadJet_TripleTag_2b2c_CvL__76","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(1,0.3221979);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(2,0.25299);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(3,0.2754178);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(4,0.2822533);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(5,0.2989319);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(6,0.2952551);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(7,0.3017607);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(8,0.3049761);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(9,0.3089146);
   _QuadJet_TripleTag_2b2c_CvL__76->SetBinContent(10,0.3285876);
   _QuadJet_TripleTag_2b2c_CvL__76->SetEntries(2.971285);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.511");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2907");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvL__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvL__76);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_2b2c_CvL__76->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvL__76->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_2b2c_CvL__76->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_2b2c_CvL__76->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__76->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL__76->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__76->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_2b2c_CvL__76->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__76->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__76->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL__76->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL__76->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL__76->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   CvL_2018_QuadJet_TripleTag_18_2b2c->Modified();
   CvL_2018_QuadJet_TripleTag_18_2b2c->cd();
   CvL_2018_QuadJet_TripleTag_18_2b2c->SetSelected(CvL_2018_QuadJet_TripleTag_18_2b2c);
}
