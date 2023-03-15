#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_16()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_16/CvL_jets_all_bckg_16
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_16 = new TCanvas("CvL_jets_all_bckg_16", "CvL_jets_all_bckg_16",0,0,600,600);
   CvL_jets_all_bckg_16->SetHighLightColor(2);
   CvL_jets_all_bckg_16->Range(-0.2183529,-6.0757e+11,1.171633,4.455513e+12);
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
   st->SetMaximum(3.949205e+12);
   
   TH1F *st_stack_170 = new TH1F("st_stack_170","",20,0,1);
   st_stack_170->SetMinimum(0);
   st_stack_170->SetMaximum(3.949205e+12);
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
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,6.943784e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,3.277736e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,7.222475e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,1.748724e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,7.726847e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,4.382226e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,2.663066e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,1.799236e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,1.359914e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.077681e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,8.753176e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,7.320897e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,6.585271e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,6.153621e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,6.055903e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,6.222153e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,6.70407e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,7.942723e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,9.841053e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,1.862151e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.179536e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.596561e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.213694e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,5.952778e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,3.95309e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,2.975064e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.317209e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,1.90373e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.65473e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.472291e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.32533e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.211004e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.147648e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.108458e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.098563e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.111716e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.152579e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.253193e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.393133e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,1.912185e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.395931e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,3.131109e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.038027e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,2.948571e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.003201e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,5672222);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,3963803);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3017408);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2493701);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2245448);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2120320);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2064481);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2064940);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2186426);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2365339);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,2652298);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3095309);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,3702207);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,4724499);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,6069561);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,9885345);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1390.043);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,2552.788);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1363.636);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,797.2013);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,598.0797);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,499.8958);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,436.0403);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,396.1973);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,375.7759);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,364.9705);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,359.919);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,359.7451);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,369.9577);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,384.659);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,407.2439);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,439.8739);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,480.9785);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,543.3261);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,616.0974);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,789.3482);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(4.006936e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
