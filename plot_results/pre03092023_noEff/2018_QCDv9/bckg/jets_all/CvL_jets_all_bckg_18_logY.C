#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_18/CvL_jets_all_bckg_18
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_18 = new TCanvas("CvL_jets_all_bckg_18", "CvL_jets_all_bckg_18",0,0,600,600);
   CvL_jets_all_bckg_18->SetHighLightColor(2);
   CvL_jets_all_bckg_18->Range(-0.2183529,5.110407,1.171633,16.31044);
   CvL_jets_all_bckg_18->SetFillColor(0);
   CvL_jets_all_bckg_18->SetFillStyle(4000);
   CvL_jets_all_bckg_18->SetBorderMode(0);
   CvL_jets_all_bckg_18->SetBorderSize(2);
   CvL_jets_all_bckg_18->SetLogy();
   CvL_jets_all_bckg_18->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_18->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_18->SetBottomMargin(0.12);
   CvL_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_18->SetFrameBorderMode(0);
   CvL_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.373672e+07);
   st->SetMaximum(6.128182e+14);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",20,0,1);
   st_stack_174->SetMinimum(2847151);
   st_stack_174->SetMaximum(1.550363e+15);
   st_stack_174->SetDirectory(0);
   st_stack_174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_174->SetLineColor(ci);
   st_stack_174->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_174->GetXaxis()->SetRange(1,20);
   st_stack_174->GetXaxis()->SetLabelFont(42);
   st_stack_174->GetXaxis()->SetTitleOffset(1);
   st_stack_174->GetXaxis()->SetTitleFont(42);
   st_stack_174->GetYaxis()->SetTitle("Events/0.05");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetTitleSize(0.037);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetTitleOffset(1);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.47109e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,6.127992e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.438436e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,3.639104e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.62682e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,9.423262e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,5.866076e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,4.033196e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,3.10742e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,2.506535e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,2.057738e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.721395e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.523866e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.407802e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,1.37319e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,1.406392e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.51806e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.820714e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,2.433405e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,6.322273e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,2.022386e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,4.009135e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.926271e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,9.794699e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,6.595422e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,5.006728e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,3.953563e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,3.280736e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,2.910431e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,2.607129e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,2.403378e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,2.151629e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,2.041238e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.98121e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.938878e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.983776e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,2.051622e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,2.284777e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,2.607106e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,4.226e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.871231e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,6.260532e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.899775e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,5.289312e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.766873e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,9824124);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,6807869);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,5165801);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,4255012);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,3842735);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,3660910);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,3597344);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,3621069);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,3852084);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,4217729);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,4816525);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,5747192);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,7053673);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,9344344);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,1.310821e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.889094e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,2346.357);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,3954.413);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,2085.486);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,1224.321);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,915.2643);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,763.2244);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,667.7113);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,605.6687);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,575.7126);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,562.7645);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,557.5754);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,558.8855);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,577.8067);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,604.2899);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,645.2528);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,705.3677);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,781.8447);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,900.214);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,1069.584);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1601.206);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(6.54851e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

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
   CvL_jets_all_bckg_18->Modified();
   CvL_jets_all_bckg_18->cd();
   CvL_jets_all_bckg_18->SetSelected(CvL_jets_all_bckg_18);
}
