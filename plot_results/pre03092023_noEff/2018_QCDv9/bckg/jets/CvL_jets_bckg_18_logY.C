#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_18_logY()
{
//=========Macro generated from canvas: CvL_jets_bckg_18/CvL_jets_bckg_18
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_18 = new TCanvas("CvL_jets_bckg_18", "CvL_jets_bckg_18",0,0,600,600);
   CvL_jets_bckg_18->SetHighLightColor(2);
   CvL_jets_bckg_18->Range(-0.2183529,4.656729,1.171633,15.22528);
   CvL_jets_bckg_18->SetFillColor(0);
   CvL_jets_bckg_18->SetFillStyle(4000);
   CvL_jets_bckg_18->SetBorderMode(0);
   CvL_jets_bckg_18->SetBorderSize(2);
   CvL_jets_bckg_18->SetLogy();
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
   st->SetMinimum(3867427);
   st->SetMaximum(6.043031e+13);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",20,0,1);
   st_stack_18->SetMinimum(841309);
   st_stack_18->SetMaximum(1.473754e+14);
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
   st_stack_18->GetYaxis()->SetTitle("Events/0.05");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,6.042729e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,4.633837e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,1.179951e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,4.635873e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,2.420136e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,1.533162e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,1.06585e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,7.818495e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,6.250501e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,5.305909e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,4.671151e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,4.184579e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,3.917207e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,3.864753e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,4.045002e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,4.434129e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,5.001483e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,6.15207e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,8.315639e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,2.404875e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,1.244263e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.065758e+08);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,5.354831e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,3.338453e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,2.432246e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.924105e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.604626e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,1.362673e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,1.235774e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,1.143747e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,1.093498e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,1.010015e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,9734564);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,9836392);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,1.005833e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,1.044618e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,1.107956e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,1.226089e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,1.423534e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,2.446161e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(6.404607e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,3.024899e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,3.539949e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,1.237399e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,6029548);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,3782870);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,2900169);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,2418237);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,2117257);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1988713);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1972757);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,2030263);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,2133929);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,2358020);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,2674537);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,3162638);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,3889811);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,4885597);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,6572415);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,9293790);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,2.058791e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1671.471);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1785.457);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,1047.838);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,731.0318);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,578.106);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,504.6276);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,460.6636);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,429.6409);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,416.4104);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,414.2293);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,420.0548);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,429.9791);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,452.4448);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,481.1786);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,523.0101);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,579.5588);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,649.9047);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,754.3931);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,900.4748);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1350.507);
   VbbHcc_jets_CvL_stack_2->SetEntries(2.225893e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   CvL_jets_bckg_18->Modified();
   CvL_jets_bckg_18->cd();
   CvL_jets_bckg_18->SetSelected(CvL_jets_bckg_18);
}
