#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_alljet_all_logY()
{
//=========Macro generated from canvas: Z_pt_alljet_all/Z_pt_alljet_all
//=========  (Wed Jan 18 11:42:16 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_alljet_all = new TCanvas("Z_pt_alljet_all", "Z_pt_alljet_all",0,0,600,600);
   Z_pt_alljet_all->SetHighLightColor(2);
   Z_pt_alljet_all->Range(37.97653,-0.2306487,1705.96,5.986339);
   Z_pt_alljet_all->SetFillColor(0);
   Z_pt_alljet_all->SetFillStyle(4000);
   Z_pt_alljet_all->SetBorderMode(0);
   Z_pt_alljet_all->SetBorderSize(2);
   Z_pt_alljet_all->SetLogy();
   Z_pt_alljet_all->SetLeftMargin(0.15709);
   Z_pt_alljet_all->SetRightMargin(0.1234783);
   Z_pt_alljet_all->SetBottomMargin(0.12);
   Z_pt_alljet_all->SetFrameFillStyle(1000);
   Z_pt_alljet_all->SetFrameBorderMode(0);
   Z_pt_alljet_all->SetFrameFillStyle(1000);
   Z_pt_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(127162.9);
   
   TH1F *st_stack_204 = new TH1F("st_stack_204","",40,0,2000);
   st_stack_204->SetMinimum(3.276347);
   st_stack_204->SetMaximum(231547.4);
   st_stack_204->SetDirectory(0);
   st_stack_204->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_204->SetLineColor(ci);
   st_stack_204->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_204->GetXaxis()->SetRange(7,30);
   st_stack_204->GetXaxis()->SetLabelFont(42);
   st_stack_204->GetXaxis()->SetTitleOffset(1);
   st_stack_204->GetXaxis()->SetTitleFont(42);
   st_stack_204->GetYaxis()->SetTitle("Events/50.0");
   st_stack_204->GetYaxis()->SetLabelFont(42);
   st_stack_204->GetYaxis()->SetTitleSize(0.037);
   st_stack_204->GetYaxis()->SetTitleFont(42);
   st_stack_204->GetZaxis()->SetLabelFont(42);
   st_stack_204->GetZaxis()->SetTitleOffset(1);
   st_stack_204->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_204);
   
   
   TH1D *VbbHcc_alljet_Z_pt_all_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(1,1271.629);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(2,893.0036);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(3,129.093);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(4,27.506);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(5,8.841397);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(6,3.170574);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(7,1.361028);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(8,0.5289662);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(9,0.2339139);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(10,0.1141639);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(11,0.05883372);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(12,0.03566455);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(13,0.01434827);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(14,0.009542728);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(15,0.003430841);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(16,0.01325164);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(17,0.00743398);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(18,0.002900369);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(19,0.004099362);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(1,1.677971);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(2,1.393074);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(3,0.5189784);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(4,0.2374838);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(5,0.1351076);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(6,0.08051693);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(7,0.05327805);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(8,0.03311758);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(9,0.02163017);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(10,0.01464309);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(11,0.01100055);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(12,0.008283193);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(13,0.00496872);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(14,0.003911939);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(15,0.002431686);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(16,0.005104734);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(17,0.003826826);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(18,0.002900369);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(19,0.002996);
   VbbHcc_alljet_Z_pt_all_stack_1->SetEntries(1410242);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_all_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(1,119.9086);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(2,135.195);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(3,48.83431);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(4,16.5544);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(5,6.147811);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(6,2.528117);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(7,1.116079);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(8,0.5168307);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(9,0.2540585);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(10,0.1224575);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(11,0.06427746);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(12,0.03991995);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(13,0.01472295);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(14,0.01475634);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(15,0.00582441);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(16,0.004745076);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(17,0.002462464);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(18,0.002047638);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(19,0.001884076);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(20,0.000505842);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(21,0.0004239168);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(22,0.001044647);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(23,0.0001894086);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(24,0.0006880901);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(25,0.000215911);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(26,0.0001480239);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(1,0.1873896);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(2,0.1989799);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(3,0.1191553);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(4,0.06919847);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(5,0.04210392);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(6,0.02739179);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(7,0.01814718);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(8,0.01227514);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(9,0.008625709);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(10,0.005918284);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(11,0.004320512);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(12,0.00349382);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(13,0.001967382);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(14,0.00223019);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(15,0.001368932);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(16,0.001256306);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(17,0.000716623);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(18,0.0007254621);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(19,0.0008128898);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(20,0.0003074755);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(21,0.0003723401);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(22,0.0005686646);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(23,0.0001894086);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(24,0.0004036047);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(25,0.000215911);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(26,0.0001480239);
   VbbHcc_alljet_Z_pt_all_stack_2->SetEntries(1377680);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_alljet_all->Modified();
   Z_pt_alljet_all->cd();
   Z_pt_alljet_all->SetSelected(Z_pt_alljet_all);
}
