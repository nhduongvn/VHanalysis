#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_16()
{
//=========Macro generated from canvas: Aplanarity_alljet_16/Aplanarity_alljet_16
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_16 = new TCanvas("Aplanarity_alljet_16", "Aplanarity_alljet_16",0,0,600,600);
   Aplanarity_alljet_16->SetHighLightColor(2);
   Aplanarity_alljet_16->Range(-0.2183529,-1.504618e+11,1.171633,1.103387e+12);
   Aplanarity_alljet_16->SetFillColor(0);
   Aplanarity_alljet_16->SetFillStyle(4000);
   Aplanarity_alljet_16->SetBorderMode(0);
   Aplanarity_alljet_16->SetBorderSize(2);
   Aplanarity_alljet_16->SetLeftMargin(0.15709);
   Aplanarity_alljet_16->SetRightMargin(0.1234783);
   Aplanarity_alljet_16->SetBottomMargin(0.12);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.780019e+11);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0);
   st_stack_253->SetMaximum(9.780019e+11);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetTitle("Aplanarity");
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetTitleOffset(1);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetTitleSize(0.037);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetTitleOffset(1);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,6413.283);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,6.519881e+11);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,5.58938e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,2.12532e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.049948e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,5.862086e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,3.514026e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,2.202915e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,1.416093e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,9.266414e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,6.111227e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,3.989396e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,2.641071e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,1.748832e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.107841e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,7.270001e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,4.537401e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,2.747803e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,1.467111e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,7707668);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,4219912);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,1536560);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,522317.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,197614.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,2371.012);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,3141.42);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.181481e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,3.422818e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,2.109436e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,1.483069e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.108565e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,8586513);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,6804311);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,5455676);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,4415298);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,3586353);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,2895197);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,2356379);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,1921403);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,1525294);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1240491);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,980115.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,764981.5);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,555963);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,403138);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,299376.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,180874.8);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,103554.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,63724.33);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,1997.237);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(1.879626e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,1.507879);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,1.315467e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,5595843);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,3345985);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,2204224);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,1520516);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1076864);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,772530.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,558293.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,404093.9);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,291560.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,208544.2);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,147885.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,103262.4);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,70810.43);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,47142.02);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,30496.23);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,19043.83);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,11243.93);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,6190.342);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,3125.707);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,1383.495);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,515.6675);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,137.2055);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,22.07026);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,0.5758567);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.3135047);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,921.9299);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,610.0263);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,473.6394);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,385.1618);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,320.2485);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,269.7226);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,228.5726);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,194.382);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,165.4289);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,140.5504);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,118.9002);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,100.153);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,83.69372);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,69.32252);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,56.56678);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,45.50258);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,35.96291);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,27.64026);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,20.50457);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,14.57435);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,9.695945);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,5.921583);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,3.051352);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.229102);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.1960915);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(4.796548e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_16->Modified();
   Aplanarity_alljet_16->cd();
   Aplanarity_alljet_16->SetSelected(Aplanarity_alljet_16);
}
