#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_17/CvB_jets_all_bckg_17
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_17 = new TCanvas("CvB_jets_all_bckg_17", "CvB_jets_all_bckg_17",0,0,600,600);
   CvB_jets_all_bckg_17->SetHighLightColor(2);
   CvB_jets_all_bckg_17->Range(-0.2183529,5.156421,1.171633,15.50034);
   CvB_jets_all_bckg_17->SetFillColor(0);
   CvB_jets_all_bckg_17->SetFillStyle(4000);
   CvB_jets_all_bckg_17->SetBorderMode(0);
   CvB_jets_all_bckg_17->SetBorderSize(2);
   CvB_jets_all_bckg_17->SetLogy();
   CvB_jets_all_bckg_17->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_17->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_17->SetBottomMargin(0.12);
   CvB_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_17->SetFrameBorderMode(0);
   CvB_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.128367e+07);
   st->SetMaximum(1.214988e+14);
   
   TH1F *st_stack_178 = new TH1F("st_stack_178","",20,0,1);
   st_stack_178->SetMinimum(2498565);
   st_stack_178->SetMaximum(2.923777e+14);
   st_stack_178->SetDirectory(0);
   st_stack_178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_178->SetLineColor(ci);
   st_stack_178->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_178->GetXaxis()->SetRange(1,20);
   st_stack_178->GetXaxis()->SetLabelFont(42);
   st_stack_178->GetXaxis()->SetTitleOffset(1);
   st_stack_178->GetXaxis()->SetTitleFont(42);
   st_stack_178->GetYaxis()->SetTitle("Events/0.05");
   st_stack_178->GetYaxis()->SetLabelFont(42);
   st_stack_178->GetYaxis()->SetTitleSize(0.037);
   st_stack_178->GetYaxis()->SetTitleFont(42);
   st_stack_178->GetZaxis()->SetLabelFont(42);
   st_stack_178->GetZaxis()->SetTitleOffset(1);
   st_stack_178->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_178);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,3.737988e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.171969e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.128023e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.388432e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.935393e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,2.878455e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,4.264347e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,6.223268e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,9.693723e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.75183e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,3.571095e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.153937e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.214954e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,7.653601e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,6.420533e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,6.824722e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,8.113308e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,8.286968e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,3.699565e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,2.120833e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.379814e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.347958e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.326827e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.475892e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.746508e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,2.134318e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.601298e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,3.144726e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.926605e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,5.281408e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,7.546162e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.358383e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.393483e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.104955e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.009927e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.038766e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.129708e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.12954e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,7.473955e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.706766e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.917007e+09);

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
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,2.832656e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,4917890);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,3436174);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,3248451);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,3304255);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,3347866);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,3650049);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,4314042);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,5641046);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,7703947);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.233786e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,3.176831e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,3.435715e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,2.479435e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,2.326465e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.505868e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.946298e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,3.147068e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,2.343757e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,3331613);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1360.112);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,566.7179);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,473.3736);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,459.034);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,462.2873);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,465.7349);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,486.5063);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,526.7989);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,599.4403);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,704.2179);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,893.426);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1433.344);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1491.97);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1268.984);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1233.959);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1293.379);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1407.283);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1472.056);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1286.754);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,485.9826);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(5.284264e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_bckg_17->Modified();
   CvB_jets_all_bckg_17->cd();
   CvB_jets_all_bckg_17->SetSelected(CvB_jets_all_bckg_17);
}
