#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_16()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_16/CvL_jets_all_bckg_16
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_16 = new TCanvas("CvL_jets_all_bckg_16", "CvL_jets_all_bckg_16",0,0,600,600);
   CvL_jets_all_bckg_16->SetHighLightColor(2);
   CvL_jets_all_bckg_16->Range(-0.2183529,-6.076159e+11,1.171633,4.45585e+12);
   CvL_jets_all_bckg_16->SetFillColor(0);
   CvL_jets_all_bckg_16->SetFillStyle(4000);
   CvL_jets_all_bckg_16->SetBorderMode(0);
   CvL_jets_all_bckg_16->SetBorderSize(2);
   CvL_jets_all_bckg_16->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_16->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_16->SetBottomMargin(0.12);
   CvL_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_16->SetFrameBorderMode(0);
   CvL_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.949503e+12);
   
   TH1F *st_stack_170 = new TH1F("st_stack_170","",20,0,1);
   st_stack_170->SetMinimum(0);
   st_stack_170->SetMaximum(3.949503e+12);
   st_stack_170->SetDirectory(0);
   st_stack_170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_170->SetLineColor(ci);
   st_stack_170->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_170->GetXaxis()->SetRange(1,20);
   st_stack_170->GetXaxis()->SetLabelFont(42);
   st_stack_170->GetXaxis()->SetTitleOffset(1);
   st_stack_170->GetXaxis()->SetTitleFont(42);
   st_stack_170->GetYaxis()->SetTitle("Event/0.05");
   st_stack_170->GetYaxis()->SetLabelFont(42);
   st_stack_170->GetYaxis()->SetTitleSize(0.037);
   st_stack_170->GetYaxis()->SetTitleFont(42);
   st_stack_170->GetZaxis()->SetLabelFont(42);
   st_stack_170->GetZaxis()->SetTitleOffset(1);
   st_stack_170->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_170);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,6.94395e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,3.277984e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,7.222529e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,1.748661e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,7.726634e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,4.382138e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,2.662778e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,1.799417e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,1.359857e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.077745e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,8.752946e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,7.318621e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,6.584506e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,6.153634e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,6.055059e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,6.22104e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,6.704284e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,7.942051e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,9.839985e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,1.861898e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.177429e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.591972e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.211505e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,5.941915e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,3.945895e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,2.969671e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.312886e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,1.900402e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.651711e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.469674e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.322928e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.208617e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.145509e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.106471e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.096495e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.109606e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.150513e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.25087e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.390546e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,1.908603e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.401422e+09);

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
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,3.130829e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.037753e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,2.9482e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.003198e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,5671702);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,3963663);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3017260);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2493501);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2245236);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2120153);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2064317);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2064842);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2186420);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2365479);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,2652425);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3095572);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,3702650);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,4724822);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,6070326);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,9887174);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1396.701);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,2566.422);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1371.254);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,801.7561);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,601.3779);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,502.657);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,438.4309);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,398.3412);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,377.7926);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,366.9194);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,361.8246);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,361.6396);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,371.9002);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,386.6812);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,409.3752);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,442.173);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,483.4955);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,546.1474);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,619.3171);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,793.6297);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3.981859e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_bckg_16->Modified();
   CvL_jets_all_bckg_16->cd();
   CvL_jets_all_bckg_16->SetSelected(CvL_jets_all_bckg_16);
}
