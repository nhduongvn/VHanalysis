#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-804400.4,1.171633,5898936);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5228602);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(0);
   st_stack_126->SetMaximum(5228602);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,3445558);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,1639189);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,711141.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,363823.9);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,227559.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,185804.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,136146.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,30926.16);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,27488.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,14823.17);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,7563.689);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,8481.156);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,3292.412);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,3745.563);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2152.282);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,13550.38);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,44.66338);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,330.9802);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,135201.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,106956.4);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,68733.09);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,43330.27);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,31384.36);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,41569.27);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,41457.54);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,5694.772);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,5552.843);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,4177.707);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,2676.43);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,3278.574);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,1381.22);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,2218.548);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1534.457);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,12272.58);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,32.41512);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,330.9802);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(40077);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,40176.78);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,29904.36);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,20469.45);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,14252.65);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,10189.31);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,7379.069);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,5423.822);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,3960.023);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,2904.517);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,2124.874);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1551.974);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,1131.039);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,792.305);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,533.8455);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,360.6206);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,233.6486);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,147.8824);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,90.0743);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,51.93527);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,23.37325);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,10.78814);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,3.375548);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,1.005321);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.1227412);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,52.20187);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,45.7086);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,38.03789);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,31.81915);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,26.95833);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,23.00135);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,19.75188);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,16.89322);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,14.48371);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,12.41229);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,10.61953);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,9.082665);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,7.598168);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,6.241215);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,5.135069);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,4.151197);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,3.292808);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,2.582804);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.961605);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.289123);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.9035085);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.4902687);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2740502);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.09306156);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2238310);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
