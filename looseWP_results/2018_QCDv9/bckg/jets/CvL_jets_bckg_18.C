#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_18()
{
//=========Macro generated from canvas: CvL_jets_bckg_18/CvL_jets_bckg_18
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_18 = new TCanvas("CvL_jets_bckg_18", "CvL_jets_bckg_18",0,0,600,600);
   CvL_jets_bckg_18->SetHighLightColor(2);
   CvL_jets_bckg_18->Range(-0.2183529,-1.120099e+11,1.171633,8.214062e+11);
   CvL_jets_bckg_18->SetFillColor(0);
   CvL_jets_bckg_18->SetFillStyle(4000);
   CvL_jets_bckg_18->SetBorderMode(0);
   CvL_jets_bckg_18->SetBorderSize(2);
   CvL_jets_bckg_18->SetLeftMargin(0.15709);
   CvL_jets_bckg_18->SetRightMargin(0.1234783);
   CvL_jets_bckg_18->SetBottomMargin(0.12);
   CvL_jets_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_bckg_18->SetFrameBorderMode(0);
   CvL_jets_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.280646e+11);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",20,0,1);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(7.280646e+11);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_18->GetXaxis()->SetRange(1,20);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Event/0.05");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,6.042633e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,4.63393e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,1.180132e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,4.63587e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,2.41975e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,1.533254e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,1.065656e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,7.820609e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,6.248744e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,5.301348e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,4.667853e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,4.183852e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,3.917228e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,3.86539e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,4.0449e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,4.432808e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,4.999619e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,6.153567e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,8.314698e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,2.404313e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,1.24547e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.066693e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,5.35977e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,3.341139e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,2.432126e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.926189e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.599535e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,1.363784e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,1.23722e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,1.13716e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,1.08976e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,1.015864e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,9748361);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,9848179);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,1.006898e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,1.046442e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,1.10894e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,1.230951e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,1.423914e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,2.446937e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(6.447966e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,3.024942e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,3.539929e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,1.237384e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,6029620);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,3782770);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,2900032);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,2418031);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,2117150);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1988825);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1972970);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,2030154);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,2133877);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,2358362);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,2674474);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,3162688);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,3889850);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,4885665);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,6572035);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,9294152);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,2.058789e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1584.918);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1693.806);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,993.8547);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,693.4155);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,548.151);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,478.2632);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,436.437);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,407.02);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,394.498);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,392.423);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,397.506);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,407.159);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,428.3822);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,455.4968);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,495.1093);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,548.7344);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,615.1267);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,713.9943);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,852.2979);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1278.578);
   VbbHcc_jets_CvL_stack_2->SetEntries(2.498632e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_18->Modified();
   CvL_jets_bckg_18->cd();
   CvL_jets_bckg_18->SetSelected(CvL_jets_bckg_18);
}
