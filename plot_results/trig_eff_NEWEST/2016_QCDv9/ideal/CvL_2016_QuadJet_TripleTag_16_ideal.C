#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_ideal/CvL_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvL_2016_QuadJet_TripleTag_16_ideal", "CvL_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_ideal->Range(-0.2183529,0.5591454,1.171633,0.8981266);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__43 = new TH1D("_QuadJet_TripleTag_ideal_CvL__43","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(1,0.8516378);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(2,0.7749077);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(3,0.7309417);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(4,0.7226562);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(5,0.6118143);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(6,0.7454545);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(7,0.7104377);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(8,0.7552941);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(9,0.7977528);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(10,0.7962963);
   _QuadJet_TripleTag_ideal_CvL__43->SetEntries(7.497193);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4992");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2956");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvL__43->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvL__43->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__43->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_QuadJet45_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   CvL_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvL_2016_QuadJet_TripleTag_16_ideal->cd();
   CvL_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvL_2016_QuadJet_TripleTag_16_ideal);
}
