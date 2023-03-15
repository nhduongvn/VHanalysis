#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_18/CvB_jets_all_bckg_18
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_18 = new TCanvas("CvB_jets_all_bckg_18", "CvB_jets_all_bckg_18",0,0,600,600);
   CvB_jets_all_bckg_18->SetHighLightColor(2);
   CvB_jets_all_bckg_18->Range(-0.2183529,5.301656,1.171633,15.60582);
   CvB_jets_all_bckg_18->SetFillColor(0);
   CvB_jets_all_bckg_18->SetFillStyle(4000);
   CvB_jets_all_bckg_18->SetBorderMode(0);
   CvB_jets_all_bckg_18->SetBorderSize(2);
   CvB_jets_all_bckg_18->SetLogy();
   CvB_jets_all_bckg_18->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_18->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_18->SetBottomMargin(0.12);
   CvB_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_18->SetFrameBorderMode(0);
   CvB_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.554314e+07);
   st->SetMaximum(1.566999e+14);
   
   TH1F *st_stack_180 = new TH1F("st_stack_180","",20,0,1);
   st_stack_180->SetMinimum(3452677);
   st_stack_180->SetMaximum(3.761905e+14);
   st_stack_180->SetDirectory(0);
   st_stack_180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_180->SetLineColor(ci);
   st_stack_180->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_180->GetXaxis()->SetRange(1,20);
   st_stack_180->GetXaxis()->SetLabelFont(42);
   st_stack_180->GetXaxis()->SetTitleOffset(1);
   st_stack_180->GetXaxis()->SetTitleFont(42);
   st_stack_180->GetYaxis()->SetTitle("Events/0.05");
   st_stack_180->GetYaxis()->SetLabelFont(42);
   st_stack_180->GetYaxis()->SetTitleSize(0.037);
   st_stack_180->GetYaxis()->SetTitleFont(42);
   st_stack_180->GetZaxis()->SetLabelFont(42);
   st_stack_180->GetZaxis()->SetTitleOffset(1);
   st_stack_180->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_180);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,5.406451e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.635037e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.553815e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.904373e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,2.629534e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,3.870093e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,5.72062e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,8.398623e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,1.299055e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,2.292383e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,4.538839e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.474121e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.566953e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,1.022031e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,8.965161e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,9.717089e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,1.173965e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,1.211716e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,5.556057e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,3.249416e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,3.874019e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,2.106715e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,2.027195e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,2.235959e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,2.635296e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,3.172343e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,3.860306e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,4.67208e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,5.791576e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,7.622159e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,1.069884e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.913519e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.974866e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.625629e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.567023e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.64456e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.817159e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.833556e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,1.241645e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,2.898796e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.871231e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,4.15685e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,7160998);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,4989826);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,4708832);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,4767305);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,4794419);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,5203865);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,6166080);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,8021210);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,1.069586e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.66146e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,4.231654e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,4.633195e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,3.482607e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,3.378615e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,3.687355e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,4.385147e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,4.732597e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,3.581144e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,5135588);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1898.646);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,784.234);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,653.2736);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,633.1954);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,633.0563);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,633.5461);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,658.1198);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,713.4674);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,806.348);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,924.3707);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,1143.677);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1794.779);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1882.905);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1670.802);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1686.413);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1789.48);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1965.704);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,2074.11);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1837.431);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,697.6754);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(6.54851e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_bckg_18->Modified();
   CvB_jets_all_bckg_18->cd();
   CvB_jets_all_bckg_18->SetSelected(CvB_jets_all_bckg_18);
}
