#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Tue Feb 14 16:02:01 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,-1.947897,7.029799,10.46117);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLogy();
   Z_dR_tags_18->SetLeftMargin(0.15709);
   Z_dR_tags_18->SetRightMargin(0.1234783);
   Z_dR_tags_18->SetBottomMargin(0.12);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.829829);
   st->SetMaximum(6.138639e+08);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0.3476891);
   st_stack_19->SetMaximum(1.660583e+09);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,1812.219);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,4806923);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,6024436);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,4210413);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,3402450);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,3387962);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,3032863);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,2912842);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,2908621);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,2982366);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,3091360);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,3407582);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,3993526);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,4443409);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,4296858);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,2607330);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,1681001);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,1268718);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,932597.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,506697.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,527749.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,198681.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,133483.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,68747.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,43105.39);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,36387.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,5583.547);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1826.284);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,715.3322);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,174987);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,200980.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,166836);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,139461.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,155367);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,136614.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,147396.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,137558.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,168475.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,143071.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,162010.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,179731.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,197386.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,181758.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,138813.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,116173.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,105280.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,96276.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,56353.37);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,75378.52);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,17719.24);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,24764.51);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,10170.84);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,8986.05);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,24516.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,3383.702);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1825.661);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(477143);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,40.0996);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,58632.16);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,114202.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,136637.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,166605.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,194829);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,221858.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,248846);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,275958.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,305867.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,337074.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,370232.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,402930.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,432141.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,423363);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,223356);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,127061);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,75473.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,44493.95);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,25639.41);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,14323.81);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,7725.948);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,3941.606);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,1813.032);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,755.8555);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,263.1901);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,63.62108);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,3.544501);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.847471);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,75.17373);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,104.7368);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,114.1869);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,126.7142);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,136.4939);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,146.1318);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,154.3977);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,162.4429);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,171.9085);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,179.6114);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,188.755);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,196.9871);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,204.2061);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,202.1898);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,147.5264);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,111.2686);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,85.64051);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,65.9219);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,50.1768);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,37.85073);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,27.83183);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,19.14736);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,12.9787);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,9.148972);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,5.011602);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,3.488843);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.5299132);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(5.418176e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
