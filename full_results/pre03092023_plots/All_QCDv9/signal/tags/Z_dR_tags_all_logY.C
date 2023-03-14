#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-3.111441,7.029799,0.7347133);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLogy();
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(14.23375);
   st_stack_20->SetMaximum(2.239226);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Event/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,1.106513);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,1.659935);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,1.667569);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,1.448341);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,1.022198);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,0.7294532);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,0.5658068);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,0.4450916);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,0.4022116);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,0.4788084);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,0.4949304);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,0.5691539);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,0.7264374);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,0.6522588);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,0.2592239);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,0.1101405);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,0.05860607);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,0.0276915);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,0.01924743);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,0.00846081);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,0.005692103);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,0.00341254);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,0.001652467);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,0.04632828);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,0.05429314);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,0.05747151);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,0.0588207);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,0.04247634);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,0.03582893);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,0.03150676);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,0.03089788);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,0.02622327);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,0.02910733);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,0.03021352);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,0.03159729);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,0.03621896);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,0.03438059);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,0.02128419);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,0.01368178);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,0.01195169);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,0.006759897);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,0.005960063);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,0.003473738);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,0.003303859);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,0.002431497);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,0.001652467);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,0.0003694841);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,0.3894362);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,0.8096738);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,0.8740535);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,0.7192889);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,0.4623262);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,0.2599027);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,0.176055);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,0.1513865);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,0.1532028);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,0.1711432);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,0.1988685);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,0.2212935);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,0.2462371);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,0.2538569);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,0.1164003);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,0.04854863);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,0.03046451);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,0.01899603);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,0.007764659);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,0.00700526);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,0.002948953);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,0.001630532);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,0.0009398917);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,0.0001288922);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,0.0004890161);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,0.0002835386);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,0.009860495);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,0.01371791);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,0.01421996);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,0.0135065);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,0.01018669);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,0.007759009);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,0.006319927);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,0.005806299);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,0.00589327);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,0.006206275);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,0.006744389);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,0.007195471);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,0.007497087);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,0.008188497);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,0.005720406);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,0.003238696);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,0.00263589);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,0.002056551);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,0.001277206);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,0.001209412);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,0.0007657611);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,0.0006082899);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,0.0004900457);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,0.0001288922);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,0.0003466078);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
