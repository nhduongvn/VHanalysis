#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-0.1167566,7.029799,0.856215);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLogy();
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(-2.456702e+09);
   st_stack_107->SetMaximum(-0.7431604);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Event/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.1593954);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.5381738);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.4319102);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.2553755);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.08398254);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.0411343);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.01713929);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.01028358);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.005141788);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.003427859);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.005141788);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,0.001713929);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,0.001713929);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.01652854);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.03037091);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.02720779);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.02092117);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.01199751);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.008396505);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.005419921);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.004198252);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.002968613);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.002423862);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.002968613);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,0.001713929);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,0.001713929);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.03723696);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.184605);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.1597804);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.07492527);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.02301921);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.01354071);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.005867642);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.00451357);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.001128393);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.002031107);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.0006770356);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0009027141);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.000451357);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0002256785);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.000451357);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,0.0002256785);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.002898893);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.006454564);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.006004915);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.004112058);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.002279241);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.001748098);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001150739);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.001009265);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0005046325);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0006770356);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0003908867);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.000451357);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0003191576);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0002256785);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0003191576);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.0002256785);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
