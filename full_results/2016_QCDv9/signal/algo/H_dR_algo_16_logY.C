void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Thu Feb  9 09:44:32 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.310117,-0.06567561,7.029799,0.4816211);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLogy();
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(40.65633);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",30,0,6);
   st_stack_85->SetMinimum(-3.129463e+09);
   st_stack_85->SetMaximum(-27.57208);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_85->GetXaxis()->SetRange(1,31);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetLabelSize(0.035);
   st_stack_85->GetXaxis()->SetTitleSize(0.035);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Events/0.2");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetLabelSize(0.035);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleOffset(0);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetLabelSize(0.035);
   st_stack_85->GetZaxis()->SetTitleSize(0.035);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.03586978);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.06483651);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.1810251);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.2182125);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.2555479);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.2984209);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.3318542);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.2110523);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.1822805);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.1820335);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.110043);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.05128684);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.0813498);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.04811457);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.02440575);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.01231775);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.002965697);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,0.002425497);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.01036663);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01494081);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.02308654);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.02585985);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.02787554);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.03024015);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.03141532);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.02559338);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.02395687);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.02328494);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.01814403);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.01296008);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.01527079);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.01182927);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.00863731);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.006163533);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002965697);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,0.002425497);
   VbbHcc_algo_H_dR_stack_1->SetEntries(816);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.005548295);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.0189407);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.04413677);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.07340236);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.1025127);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.1028357);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.07470912);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.05485678);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.0361107);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.03028153);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.01681679);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.01306844);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.01425527);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.01304718);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.005986288);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.001132277);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001957278);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0006850578);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0004148414);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001440077);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002663757);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.004109149);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.005302189);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.006266571);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.006301837);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.005379935);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.004613149);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.003742436);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.003437244);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.00254807);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.002225466);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.002332155);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.002230308);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001517972);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0006539083);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.0008456495);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0004845067);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0004148414);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1618);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
