#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_logY()
{
//=========Macro generated from canvas: CvL_jets_all/CvL_jets_all
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all = new TCanvas("CvL_jets_all", "CvL_jets_all",0,0,600,600);
   CvL_jets_all->SetHighLightColor(2);
   CvL_jets_all->Range(-0.2183529,5.323417,1.171633,15.83343);
   CvL_jets_all->SetFillColor(0);
   CvL_jets_all->SetFillStyle(4000);
   CvL_jets_all->SetBorderMode(0);
   CvL_jets_all->SetBorderSize(2);
   CvL_jets_all->SetLogy();
   CvL_jets_all->SetLeftMargin(0.15709);
   CvL_jets_all->SetRightMargin(0.1234783);
   CvL_jets_all->SetBottomMargin(0.12);
   CvL_jets_all->SetFrameFillStyle(1000);
   CvL_jets_all->SetFrameBorderMode(0);
   CvL_jets_all->SetFrameFillStyle(1000);
   CvL_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.758287e+07);
   st->SetMaximum(2.493247e+14);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",20,0,1);
   st_stack_12->SetMinimum(3842548);
   st_stack_12->SetMaximum(6.059425e+14);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_12->GetXaxis()->SetRange(1,20);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/0.05");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_jets_CvL_all_stack_1 = new TH1D("VbbHcc_jets_CvL_all_stack_1","",20,0,1);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(1,2.419724e+12);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(2,2.493123e+12);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(3,6.701688e+11);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(4,2.436051e+11);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(5,1.246162e+11);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(6,7.829337e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(7,5.361903e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(8,3.876661e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(9,3.067865e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(10,2.56819e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(11,2.215774e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(12,1.952904e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(13,1.811802e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(14,1.757513e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(15,1.796198e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(16,1.929785e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(17,2.141191e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(18,2.617524e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(19,3.471659e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinContent(20,9.069564e+10);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(1,2.250511e+08);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(2,2.26409e+08);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(3,1.163332e+08);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(4,6.99914e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(5,5.01336e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(6,3.979036e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(7,3.294614e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(8,2.816005e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(9,2.492189e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(10,2.27514e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(11,2.124995e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(12,2.002312e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(13,1.921992e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(14,1.890082e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(15,1.900792e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(16,1.99697e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(17,2.094985e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(18,2.314299e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(19,2.655385e+07);
   VbbHcc_jets_CvL_all_stack_1->SetBinError(20,4.361929e+07);
   VbbHcc_jets_CvL_all_stack_1->SetEntries(2.27431e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_all_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_all_stack_2 = new TH1D("VbbHcc_jets_CvL_all_stack_2","",20,0,1);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(1,9.022004e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(2,1.234984e+08);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(3,4.388529e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(4,2.030436e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(5,1.251171e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(6,9432853);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(7,7721865);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(8,6656249);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(9,6178186);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(10,6048418);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(11,6123549);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(12,6338536);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(13,6915444);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(14,7740740);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(15,9011865);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(16,1.091245e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(17,1.351206e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(18,1.792971e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(19,2.485048e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinContent(20,5.249868e+07);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(1,2734.204);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(2,3176.965);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(3,1880.622);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(4,1276.852);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(5,999.8059);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(6,865.2114);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(7,782.0349);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(8,724.4976);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(9,697.5826);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(10,689.7712);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(11,693.2124);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(12,704.663);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(13,736.14);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(14,777.9388);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(15,839.0155);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(16,923.0603);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(17,1027.479);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(18,1184.266);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(19,1397.51);
   VbbHcc_jets_CvL_all_stack_2->SetBinError(20,2048.291);
   VbbHcc_jets_CvL_all_stack_2->SetEntries(7.170845e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all->Modified();
   CvL_jets_all->cd();
   CvL_jets_all->SetSelected(CvL_jets_all);
}
